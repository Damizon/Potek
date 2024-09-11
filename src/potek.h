// Potentiometer Library by Ourniti

class potek {
  public:
    // Constructor to initialize object
    potek(int pin, int minVal, int maxVal, bool rev, int tol) {
      pinMode(pin, INPUT);
      _pin = pin;
      _minVal = minVal;
      _maxVal = maxVal;
      _reverse = rev;
      _tolerance = tol;
      _name = "p" + String(pin);
    }

    // Read the current value of the potentiometer
    int read() {
      int val = analogRead(_pin);
      val = map(val, 0, 1023, _minVal, _maxVal);
      if (_reverse) {
        val = _minVal + _maxVal - val;
      }
      
      // Check for tolerance
      if (abs(val - _lastVal) < _tolerance) {
        val = _lastVal;
      }
      else {
        _lastVal = val;
      }
      
      return val;
    }

    // Set the range of output values
    void setRange(int minVal, int maxVal) {
      _minVal = minVal;
      _maxVal = maxVal;
    }

    // Set the name of the potentiometer
    void setName(String name) {
      _name = name;
    }

  private:
    int _pin;
    int _minVal;
    int _maxVal;
    bool _reverse;
    int _tolerance;
    int _lastVal = 0;
    String _name;
};
