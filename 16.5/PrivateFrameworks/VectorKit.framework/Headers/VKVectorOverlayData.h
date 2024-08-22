// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKVECTOROVERLAYDATA_H
#define VKVECTOROVERLAYDATA_H

@protocol VKVectorOverlayDelegate;

#import <Foundation/Foundation.h>


@interface VKVectorOverlayData : NSObject {
    NSInteger _blendMode;
}


@property (nonatomic) NSInteger blendMode;
@property (weak, nonatomic, getter=_delegate, setter=_setDelegate:) NSObject<VKVectorOverlayDelegate> *delegate; // ivar: _delegate


-(id)init;


@end


#endif