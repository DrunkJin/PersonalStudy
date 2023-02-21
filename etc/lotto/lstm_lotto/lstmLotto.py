import pandas as pd
import numpy as np
from sklearn.preprocessing import StandardScaler
import os

df = pd.read_csv("./lotto.csv")
print(df.columns) # Index(['lottery', 'date', 'num1', 'num2', 'num3', 'num4', 'num5', 'num6', 'bonus'], dtype='object')

df = df.drop(['lottery', 'date'], axis=1)

scaler = StandardScaler().fit(df.values)
transformed_dataset = scaler.transform(df.values)
transformed_df = pd.DataFrame(data = transformed_dataset, index = df.index)

number_of_rows= df.values.shape[0] #all our games
window_length = 5
number_of_features = df.values.shape[1] #balls count

train = np.empty([number_of_rows-window_length, window_length, number_of_features], dtype=float)
label = np.empty([number_of_rows-window_length, number_of_features], dtype=float)

for i in range(0, number_of_rows-window_length):
    train[i]=transformed_df.iloc[i:i+window_length, 0: number_of_features]
    label[i]=transformed_df.iloc[i+window_length: i+window_length+1, 0: number_of_features]

from keras.models import Sequential
from keras.models import load_model
from keras.layers import LSTM, Dense,Dropout

batch_size = 25

if os.path.exists('./'+'lotto'+'.h5'):
    model = load_model('./'+'lotto'+'.h5')
else:
    model = Sequential()
    model.add(LSTM(32,
               input_shape=(window_length, number_of_features),
               return_sequences=True))
    model.add(Dropout(0.2))
    model.add(LSTM(32,
               return_sequences=False))
    model.add(Dropout(0.2))
    model.add(Dense(number_of_features))
    model.compile(loss='mse', optimizer='rmsprop')
    model.fit(train, label,
          batch_size=64, epochs=10000)
    model.save('lotto.h5')

to_predict=df.iloc[-5:]
scaled_to_predict = scaler.transform(to_predict)
scaled_predicted_output_1 = model.predict(np.array([scaled_to_predict]))
data = scaler.inverse_transform(scaled_predicted_output_1).astype(float)
data = np.round(data, 0)
df = pd.DataFrame(data, columns=['num1', 'num2', 'num3', 'num4', 'num5', 'num6', 'bonus'])
# df.to_csv('lotto_predict.csv', index=False)
