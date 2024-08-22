// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIBOUNDINGTEXTRECTSSOLVER_H
#define _UIBOUNDINGTEXTRECTSSOLVER_H

@class NSTextContainer, NSArray;

#import <Foundation/Foundation.h>

#import "UITextRange.h"

@interface _UIBoundingTextRectsSolver : NSObject {
    UITextRange *_range;
    CGRect _firstRect;
    CGRect _lastRect;
    CGRect _middleRect;
    CGRect _totalRect;
    BOOL _calculated;
    BOOL _unifyRects;
    NSTextContainer *_textContainer;
}


@property (readonly, nonatomic) CGRect bodyRect;
@property (readonly, nonatomic) CGRect boundingRect;
@property (readonly, nonatomic) CGRect firstLineRect;
@property (readonly, nonatomic) CGRect lastLineRect;
@property (readonly, nonatomic) NSArray *rects;


-(id)description;
-(id)initWithTextContainer:(id)arg0 range:(id)arg1 unifyRects:(BOOL)arg2 ;
-(void)_calculate;
-(void)_calculateRectsUsingLayoutManager:(id)arg0 ;
-(void)_calculateRectsUsingTextLayoutManager:(id)arg0 ;
-(void)_calculateTotalRect;
-(void)_coalesceRectsForRects:(id)arg0 ;


@end


#endif