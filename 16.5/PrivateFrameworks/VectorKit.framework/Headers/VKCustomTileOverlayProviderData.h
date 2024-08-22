// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKCUSTOMTILEOVERLAYPROVIDERDATA_H
#define VKCUSTOMTILEOVERLAYPROVIDERDATA_H

@protocol VKCustomTileOverlayProviderDelegate;

#import <Foundation/Foundation.h>


@interface VKCustomTileOverlayProviderData : NSObject {
    NSInteger _desiredDisplayRate;
    CGFloat _alpha;
}


@property (nonatomic) CGFloat alpha;
@property (weak, nonatomic) NSObject<VKCustomTileOverlayProviderDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger desiredDisplayRate;
@property (readonly, nonatomic) unsigned int maximumZ; // ivar: _maximumZ
@property (readonly, nonatomic) unsigned int minimumZ; // ivar: _minimumZ
@property (readonly, nonatomic) unsigned int providerID; // ivar: _providerID
@property (readonly, nonatomic) unsigned int tileSize; // ivar: _tileSize


-(id)initWithProviderID:(unsigned int)arg0 tileSize:(unsigned int)arg1 minimumZ:(unsigned int)arg2 maximumZ:(unsigned int)arg3 ;


@end


#endif