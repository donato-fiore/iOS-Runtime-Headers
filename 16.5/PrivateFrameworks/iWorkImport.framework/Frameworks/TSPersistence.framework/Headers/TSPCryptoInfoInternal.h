// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPCRYPTOINFOINTERNAL_H
#define TSPCRYPTOINFOINTERNAL_H

@class NSArray, SFUCryptoKey, NSString;
@protocol TSPCryptoInfo;

#import <Foundation/Foundation.h>


@interface TSPCryptoInfoInternal : NSObject <TSPCryptoInfo>



@property (retain, nonatomic) NSArray *blockInfos; // ivar: _blockInfos
@property (readonly, nonatomic) SFUCryptoKey *cryptoKey; // ivar: _cryptoKey
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSUInteger decodedLength; // ivar: _decodedLength
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasDecodedLength;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger preferredBlockSize; // ivar: _preferredBlockSize
@property (readonly) Class superclass;


-(id)initWithCryptoInfo:(id)arg0 ;
-(id)initWithCryptoKey:(id)arg0 preferredBlockSize:(NSUInteger)arg1 blockInfos:(id)arg2 decodedLength:(NSUInteger)arg3 ;
-(id)mutableCryptoInfoCopy;


@end


#endif