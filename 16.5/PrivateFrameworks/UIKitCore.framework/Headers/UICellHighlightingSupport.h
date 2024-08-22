// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICELLHIGHLIGHTINGSUPPORT_H
#define UICELLHIGHLIGHTINGSUPPORT_H


#import <Foundation/Foundation.h>


@interface UICellHighlightingSupport : NSObject {
    *__CFDictionary _unhighlightedStates;
    id *_cell;
}




-(id)initWithCell:(id)arg0 ;
-(void)applyState:(NSUInteger)arg0 toView:(id)arg1 ;
-(void)cacheState:(NSUInteger)arg0 forView:(id)arg1 ;
-(void)dealloc;
-(void)highlightView:(id)arg0 ;


@end


#endif