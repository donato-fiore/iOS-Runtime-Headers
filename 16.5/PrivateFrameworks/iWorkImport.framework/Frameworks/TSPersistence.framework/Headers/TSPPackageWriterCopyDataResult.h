// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPPACKAGEWRITERCOPYDATARESULT_H
#define TSPPACKAGEWRITERCOPYDATARESULT_H

@class NSString;
@protocol TSPCryptoInfo;

#import <Foundation/Foundation.h>


@interface TSPPackageWriterCopyDataResult : NSObject

@property (readonly, nonatomic) NSUInteger encodedLength; // ivar: _encodedLength
@property (readonly, nonatomic) NSObject<TSPCryptoInfo> *encryptionInfo; // ivar: _encryptionInfo
@property (readonly, nonatomic) NSString *filename; // ivar: _filename


-(id)init;
-(id)initWithFilename:(id)arg0 encryptionInfo:(id)arg1 encodedLength:(NSUInteger)arg2 ;


@end


#endif