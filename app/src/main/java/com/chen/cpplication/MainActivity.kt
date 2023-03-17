package com.chen.cpplication

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.TextView
import com.chen.cpplication.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        // Example of a call to a native method
        binding.sampleText.text = stringFromJNI("#", "-", "~", "X")
    }

    /**
     * A native method that is implemented by the 'cpplication' native library,
     * which is packaged with this application.
     */
    external fun stringFromJNI(top: String, bottom: String, brow: String, eyes: String): String

    companion object {
        // Used to load the 'cpplication' library on application startup.
        init {
            System.loadLibrary("cpplication")
        }
    }
}