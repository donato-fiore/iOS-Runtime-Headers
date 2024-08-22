// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBICONLISTROTATIONICONVIEWPROVIDER_H
#define SBICONLISTROTATIONICONVIEWPROVIDER_H

@protocol SBIconViewProviding;

#import <Foundation/Foundation.h>

#import "SBIconListView.h"

@interface SBIconListRotationIconViewProvider : NSObject <SBIconViewProviding>



@property (readonly, weak, nonatomic) SBIconListView *listView; // ivar: _listView


-(BOOL)isIconViewRecycled:(id)arg0 ;
-(id)dequeueReusableIconViewOfClass:(Class)arg0 ;
-(id)initWithListView:(id)arg0 ;
-(void)configureIconView:(id)arg0 forIcon:(id)arg1 ;
-(void)recycleIconView:(id)arg0 ;


@end


#endif