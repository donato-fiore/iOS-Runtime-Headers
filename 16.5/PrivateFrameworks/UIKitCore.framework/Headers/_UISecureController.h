// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISECURECONTROLLER_H
#define _UISECURECONTROLLER_H

@class UIControl<_UISecureControl>, _UISSecureControlSizeSpec, _UISSecureControlCategory, NSString;
@protocol _UISlotViewContentDelegate;

#import <Foundation/Foundation.h>

#import "_UISlotView.h"

@interface _UISecureController : NSObject <_UISlotViewContentDelegate>

 {
    UIControl<_UISecureControl> *_secureControl;
    _UISlotView *_slotView;
    _UISSecureControlSizeSpec *_lastSizeSpec;
}


@property (nonatomic) *CGColor baseBackgroundColor; // ivar: _baseBackgroundColor
@property (nonatomic) *CGColor baseForegroundColor; // ivar: _baseForegroundColor
@property (readonly, nonatomic) _UISSecureControlCategory *category; // ivar: _category
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) NSInteger cornerStyle; // ivar: _cornerStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL enchanted; // ivar: _enchanted
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger imagePlacement; // ivar: _imagePlacement
@property (readonly, nonatomic) CGSize intrinsicContentSize; // ivar: _intrinsicContentSize
@property (readonly, nonatomic) unsigned int secureName;
@property (nonatomic) BOOL shouldLayoutSynchronously; // ivar: _shouldLayoutSynchronously
@property (readonly) Class superclass;


-(BOOL)shouldGetFinalContentSynchronouslyInSlotView:(id)arg0 ;
-(BOOL)slotView:(id)arg0 shouldSetFinalContentForStyle:(id)arg1 tag:(id)arg2 ;
-(BOOL)slotView:(id)arg0 shouldSetInitialContentForStyle:(id)arg1 tag:(id)arg2 ;
-(id)currentTagForSlotView:(id)arg0 ;
-(id)initWithCategory:(id)arg0 control:(id)arg1 ;
-(id)slotMachineForFinalContentInSlotView:(id)arg0 ;
-(id)slotView:(id)arg0 initialContentForStyle:(id)arg1 tag:(id)arg2 ;
-(id)slotView:(id)arg0 replacementForFinalContent:(id)arg1 style:(id)arg2 tag:(id)arg3 ;
-(void)dealloc;
-(void)slotView:(id)arg0 didSetFinalContent:(BOOL)arg1 forStyle:(id)arg2 tag:(id)arg3 ;
-(void)slotView:(id)arg0 didSetInitialContent:(BOOL)arg1 forStyle:(id)arg2 tag:(id)arg3 ;
-(void)updateSlotView;
-(void)updateState;


@end


#endif