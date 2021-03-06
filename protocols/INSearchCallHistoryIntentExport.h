/* Generated by RuntimeBrowser.
 */

@protocol INSearchCallHistoryIntentExport <NSObject, JSExport>

@required

- (unsigned long long)callCapabilities;
- (long long)callType;
- (INDateComponentsRange *)dateCreated;
- (id)init;
- (INPerson *)recipient;
- (void)setCallCapabilities:(unsigned long long)arg1;
- (void)setCallType:(long long)arg1;
- (void)setDateCreated:(INDateComponentsRange *)arg1;
- (void)setRecipient:(INPerson *)arg1;

@end
