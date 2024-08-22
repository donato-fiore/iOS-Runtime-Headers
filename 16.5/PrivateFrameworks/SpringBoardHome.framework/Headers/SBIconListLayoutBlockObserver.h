// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBICONLISTLAYOUTBLOCKOBSERVER_H
#define SBICONLISTLAYOUTBLOCKOBSERVER_H

@class NSString;
@protocol BSInvalidatable, SBIconListLayoutObserver;

#import <Foundation/Foundation.h>


@interface SBIconListLayoutBlockObserver : NSObject <BSInvalidatable, SBIconListLayoutObserver>



@property (copy, nonatomic) id *boundsSizeChangeBlock; // ivar: _boundsSizeChangeBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didAddIconViewBlock; // ivar: _didAddIconViewBlock
@property (copy, nonatomic) id *didRemoveIconViewBlock; // ivar: _didRemoveIconViewBlock
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)iconListView:(id)arg0 didAddIconView:(id)arg1 ;
-(void)iconListView:(id)arg0 didRemoveIconView:(id)arg1 ;
-(void)iconListViewDidChangeBoundsSize:(id)arg0 ;
-(void)invalidate;


@end


#endif