// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPDIGEST_H
#define TSPDIGEST_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSPDigest : NSObject <NSCopying>

 {
    array<unsigned char, 20UL> _digestData;
}


@property (readonly, nonatomic) *void digestData;
@property (readonly, nonatomic) NSString *digestString;


+(id)digestFromDispatchData:(id)arg0 ;
+(id)digestFromNSData:(id)arg0 ;
+(id)digestFromReadChannel:(id)arg0 error:(*id)arg1 ;
+(id)digestFromReadChannel:(id)arg0 scanForOSLikeCorruption:(BOOL)arg1 foundLikelyOSCorruption:(*BOOL)arg2 foundLikelyZeroBytesCorruption:(*BOOL)arg3 error:(*id)arg4 ;
+(id)digestWithDigestString:(id)arg0 ;
+(id)emptyDataDigest;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)anonymousIdentifierWithContext:(id)arg0 ;
-(id)anonymousIdentifierWithDocumentProperties:(id)arg0 passphrase:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initFromBytes:(*void)arg0 length:(unsigned int)arg1 ;
-(id)initFromDispatchData:(id)arg0 ;
-(id)initFromNSData:(id)arg0 ;
-(id)initFromProtobufString:(*void)arg0 ;
-(id)initFromReadChannel:(id)arg0 error:(*id)arg1 ;
-(id)initFromReadChannel:(id)arg0 scanForOSLikeCorruption:(BOOL)arg1 foundLikelyOSCorruption:(*BOOL)arg2 foundLikelyZeroBytesCorruption:(*BOOL)arg3 error:(*id)arg4 ;
-(id)initFromSHA1Context:(struct CC_SHA1state_st *)arg0 ;
-(id)initWithDigestString:(id)arg0 ;
-(void)saveToProtobufString:(*void)arg0 ;


@end


#endif