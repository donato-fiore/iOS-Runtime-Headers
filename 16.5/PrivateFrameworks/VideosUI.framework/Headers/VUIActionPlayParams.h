// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIACTIONPLAYPARAMS_H
#define VUIACTIONPLAYPARAMS_H


#import <Foundation/Foundation.h>

#import "VUIMediaInfo.h"

@interface VUIActionPlayParams : NSObject

@property (copy, nonatomic) id *completion; // ivar: _completion
@property (nonatomic) BOOL isRentAndWatchNow; // ivar: _isRentAndWatchNow
@property (retain, nonatomic) VUIMediaInfo *mediaInfo; // ivar: _mediaInfo
@property (nonatomic) NSInteger watchType; // ivar: _watchType


+(id)playParamsWithMediaInfo:(id)arg0 watchType:(NSInteger)arg1 isRentAndWatchNow:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif