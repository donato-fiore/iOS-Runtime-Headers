// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBVIEWSNAPSHOTPROVIDER_H
#define SBVIEWSNAPSHOTPROVIDER_H

@class UIView;

#import <Foundation/Foundation.h>

#import "SBWindowScene.h"

@interface SBViewSnapshotProvider : NSObject {
    UIView *_view;
    NSInteger _orientation;
}


@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (nonatomic) CGFloat delay; // ivar: _delay
@property (nonatomic) BOOL includeWindowSceneWallpaper; // ivar: _includeWindowSceneWallpaper
@property (readonly, weak, nonatomic) SBWindowScene *windowScene; // ivar: _windowScene


-(id)_createSnapshotOfWallpaperAndWindow:(id)arg0 ;
-(id)initWithWindowScene:(id)arg0 view:(id)arg1 orientation:(NSInteger)arg2 ;
-(id)snapshot;
-(void)snapshotAsynchronously:(BOOL)arg0 withImageBlock:(id)arg1 ;
-(void)snapshotWithImageBlock:(id)arg0 ;


@end


#endif