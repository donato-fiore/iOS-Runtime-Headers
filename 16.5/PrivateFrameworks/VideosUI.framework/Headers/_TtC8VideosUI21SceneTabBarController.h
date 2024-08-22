// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI21SCENETABBARCONTROLLER_H
#define _TTC8VIDEOSUI21SCENETABBARCONTROLLER_H

@class NSArray;
@protocol VUITabBarProtocol;

#import <Foundation/Foundation.h>


@interface _TtC8VideosUI21SceneTabBarController : NSObject <VUITabBarProtocol>

 {
    ? _tabBarInfo;
    ? previousSelectedIndex;
    ? hasSetTabbarIndex;
}


@property (nonatomic) NSUInteger selectedIndex;
@property (nonatomic) BOOL tabBarHidden;
@property (nonatomic, readonly) NSArray *tabBarItems;


-(BOOL)isTabBarHidden;
-(id)init;
-(void)willResignActive:(id)arg0 ;
-(void)willTerminate:(id)arg0 ;


@end


#endif