/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSDictionary, NSArray;

@interface TCFontFamily : NSObject  {
    NSDictionary *_namesByLanguage;
    NSArray *_members;
}

@property(readonly) NSDictionary * namesByLanguage;
@property(readonly) NSArray * members;


- (id)variantByRemovingBoldFromFont:(id)arg1;
- (bool)fontIsDesignatedBold:(id)arg1;
- (id)variantByRemovingItalicFromFont:(id)arg1;
- (id)variantByAddingBoldToFont:(id)arg1;
- (id)variantByAddingItalicToFont:(id)arg1;
- (id)memberForFullName:(id)arg1;
- (id)memberForPSName:(id)arg1;
- (id)bestMatchForStyling:(struct TCFontStyling { int x1; unsigned int x2; BOOL x3; boolx4; int x5; })arg1;
- (id)initWithNamesByLanguage:(id)arg1 members:(id)arg2;
- (id)namesByLanguage;
- (id)equivalentDictionary;
- (id)members;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;
- (id)description;

@end