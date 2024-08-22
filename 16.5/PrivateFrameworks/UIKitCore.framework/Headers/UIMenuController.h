// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIMENUCONTROLLER_H
#define UIMENUCONTROLLER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface UIMenuController : NSObject

@property (nonatomic) NSInteger arrowDirection; // ivar: _arrowDirection
@property (readonly, nonatomic) CGRect menuFrame;
@property (copy, nonatomic) NSArray *menuItems;
@property (nonatomic, getter=isMenuVisible) BOOL menuVisible; // ivar: _menuVisible


+(id)sharedMenuController;
-(id)_asCalloutBarDelegate;
-(id)init;
-(void)hideMenu;
-(void)hideMenuFromView:(id)arg0 ;
-(void)setTargetRect:(struct CGRect )arg0 inView:(id)arg1 ;
-(void)showMenuFromView:(id)arg0 rect:(struct CGRect )arg1 ;
-(void)update;


@end


#endif