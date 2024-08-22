// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFOCUSFASTSCROLLINGENTRYTRIMMERDELEGATE_H
#define _UIFOCUSFASTSCROLLINGENTRYTRIMMERDELEGATE_H

@class NSString;
@protocol _UIFocusFastScrollingIndexBarEntryTrimmerDelegate;

#import <Foundation/Foundation.h>


@interface _UIFocusFastScrollingEntryTrimmerDelegate : NSObject <_UIFocusFastScrollingIndexBarEntryTrimmerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_focusFastScrollingIndexBarEntryTrimmer:(id)arg0 entryIsPlaceholder:(id)arg1 ;
-(BOOL)_focusFastScrollingIndexBarEntryTrimmer:(id)arg0 startingOrEndingEntryMustBePreserved:(id)arg1 ;
-(id)_focusFastScrollingIndexBarEntryTrimmer:(id)arg0 placeholderEntryBetweenEntryBefore:(id)arg1 entryAfter:(id)arg2 ;


@end


#endif