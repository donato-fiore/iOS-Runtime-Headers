// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRFIELDSTRUCTURESIGNATURE_H
#define BRFIELDSTRUCTURESIGNATURE_H

@class PBCodable, NSString;
@protocol BRFieldVersionSignature, NSCopying;



@interface BRFieldStructureSignature : PBCodable <BRFieldVersionSignature, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasOldVersionIdentifier;
@property (readonly, nonatomic) BOOL hasOldVersionIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *oldVersionIdentifier;
@property (retain, nonatomic) NSString *oldVersionIdentifier; // ivar: _oldVersionIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *versionIdentifier;
@property (retain, nonatomic) NSString *versionIdentifier; // ivar: _versionIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentToSignature:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)etag;
-(id)initWithLocalStatInfo:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif