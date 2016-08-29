/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOActiveTileGroupReserved : PBCodable <NSCopying> {
    NSString * _authToken;
}

@property (nonatomic, retain) NSString *authToken;
@property (nonatomic, readonly) bool hasAuthToken;

- (id)authToken;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAuthToken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (void)writeTo:(id)arg1;

@end