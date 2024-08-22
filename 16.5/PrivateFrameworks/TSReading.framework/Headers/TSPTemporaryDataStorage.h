// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPTEMPORARYDATASTORAGE_H
#define TSPTEMPORARYDATASTORAGE_H

@class NSURL, SFUCryptoKey;


#import "TSPFileDataStorage.h"

@interface TSPTemporaryDataStorage : TSPFileDataStorage {
    NSURL *_URL;
    SFUCryptoKey *_decryptionKey;
}


@property (nonatomic) BOOL isMissingData; // ivar: _isMissingData


-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 decryptionKey:(id)arg1 ;
-(void)dealloc;
-(void)performIOChannelReadWithAccessor:(id)arg0 ;
-(void)performReadWithAccessor:(id)arg0 ;


@end


#endif