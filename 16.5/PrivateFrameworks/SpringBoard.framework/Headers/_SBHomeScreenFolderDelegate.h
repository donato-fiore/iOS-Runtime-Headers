// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBHOMESCREENFOLDERDELEGATE_H
#define _SBHOMESCREENFOLDERDELEGATE_H

@protocol SBFolderControllerDelegate;

#import <Foundation/Foundation.h>


@interface _SBHomeScreenFolderDelegate : NSObject

@property (nonatomic) NSInteger dockStyle; // ivar: _dockStyle
@property (retain, nonatomic) NSObject<SBFolderControllerDelegate> *forwardingTarget; // ivar: _forwardingTarget


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)backgroundViewForDockForRootFolderController:(id)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithForwardingTarget:(id)arg0 ;


@end


#endif