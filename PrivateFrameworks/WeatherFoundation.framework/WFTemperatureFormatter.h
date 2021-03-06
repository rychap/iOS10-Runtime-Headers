/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFTemperatureFormatter : NSFormatter {
    NSString * _fallbackTemperatureString;
    int  _inputUnit;
    NSLocale * _locale;
    unsigned long long  _maximumFractionDigits;
    struct UAMeasureFormat { } * _measureFormatter;
    int  _outputUnit;
    unsigned long long  _roundingMode;
}

@property (nonatomic, copy) NSString *fallbackTemperatureString;
@property (nonatomic) int inputUnit;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic) unsigned long long maximumFractionDigits;
@property (nonatomic) struct UAMeasureFormat { }*measureFormatter;
@property (nonatomic) int outputUnit;
@property (nonatomic) unsigned long long roundingMode;

+ (id)temperatureFormatterWithInputUnit:(int)arg1 outputUnit:(int)arg2;

- (void).cxx_destruct;
- (id)_formatTemperatureValue:(id)arg1 toUnit:(int)arg2;
- (void)_localeDidChangeNotification:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)fallbackTemperatureString;
- (id)formattedStringFromTemperature:(id)arg1;
- (id)formattedTemperatureFromString:(id)arg1;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)init;
- (int)inputUnit;
- (id)locale;
- (unsigned long long)maximumFractionDigits;
- (struct UAMeasureFormat { }*)measureFormatter;
- (int)outputUnit;
- (unsigned long long)roundingMode;
- (void)setFallbackTemperatureString:(id)arg1;
- (void)setInputUnit:(int)arg1;
- (void)setLocale:(id)arg1;
- (void)setMaximumFractionDigits:(unsigned long long)arg1;
- (void)setMeasureFormatter:(struct UAMeasureFormat { }*)arg1;
- (void)setOutputUnit:(int)arg1;
- (void)setRoundingMode:(unsigned long long)arg1;
- (id)stringForObjectValue:(id)arg1;

@end
