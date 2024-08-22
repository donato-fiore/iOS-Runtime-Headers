// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUPREPAREMEDIAITEMOPERATION_H
#define SUPREPAREMEDIAITEMOPERATION_H

@class ISOperation;


#import "SUMediaPlayerItem.h"

@interface SUPrepareMediaItemOperation : ISOperation

@property (readonly, copy, nonatomic) SUMediaPlayerItem *mediaPlayerItem; // ivar: _mediaItem


-(BOOL)_runHEADRequest:(*id)arg0 ;
-(id)init;
-(id)initWithMediaPlayerItem:(id)arg0 ;
-(void)dealloc;
-(void)run;


@end


#endif