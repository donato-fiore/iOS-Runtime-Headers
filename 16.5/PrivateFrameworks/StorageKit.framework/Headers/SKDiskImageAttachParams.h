// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKDISKIMAGEATTACHPARAMS_H
#define SKDISKIMAGEATTACHPARAMS_H


#import <Foundation/Foundation.h>

#import "SKMountParams.h"

@interface SKDiskImageAttachParams : NSObject

@property (nonatomic) BOOL is4KBlockSize; // ivar: _is4KBlockSize
@property (copy, nonatomic) SKMountParams *mountParams; // ivar: _mountParams
@property (nonatomic) NSInteger policy; // ivar: _policy
@property (nonatomic) BOOL readOnly; // ivar: _readOnly
@property (nonatomic) BOOL stdinPassPhrase; // ivar: _stdinPassPhrase


-(id)description;
-(id)diAttachParamsWithURL:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithParams:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif