import { configureStore } from "@reduxjs/toolkit";
import counterReducer from '../features/counter/CounterSlice';
import ThemeReducer from "./Theme/ThemeSlicer";

export const store = configureStore({
    reducer: {
        counter : counterReducer,
        theme : ThemeReducer,
    },
});


