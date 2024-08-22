// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UILABELMUTABLESYNTHESIZEDCONTENT_H
#define _UILABELMUTABLESYNTHESIZEDCONTENT_H

@class UILabelSynthesizedContent, NSTextEncapsulation;


#import "_UILabelContent.h"
#import "UIColor.h"

@interface _UILabelMutableSynthesizedContent : UILabelSynthesizedContent

@property (retain, nonatomic) _UILabelContent *content;
@property (nonatomic) BOOL disableLinkHypenation;
@property (nonatomic) BOOL eliminateShadows;
@property (nonatomic) BOOL overallWritingDirectionFollowsLayoutDirection;
@property (retain, nonatomic) UIColor *overrideTextColor;
@property (nonatomic) NSInteger semanticContentAttribute;
@property (copy, nonatomic) NSTextEncapsulation *textEncapsulation;


-(id)initWithContent:(id)arg0 ;
-(void)_resetSynthesizedResults;


@end


#endif