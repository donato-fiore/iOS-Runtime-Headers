// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUISYSTEMAPERTURETEXTCONTENTPROVIDER_H
#define SBUISYSTEMAPERTURETEXTCONTENTPROVIDER_H

@class NSAttributedString, UIColor, NSString, UIView;
@protocol SBUISystemApertureContentViewProviding, SBUISystemApertureContentColorStyling;

#import <Foundation/Foundation.h>


@interface SBUISystemApertureTextContentProvider : NSObject <SBUISystemApertureContentViewProviding, SBUISystemApertureContentColorStyling>



@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *providedView; // ivar: _providedView
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment;


+(id)_textColorForTextStyle:(NSInteger)arg0 ;
-(id)_initWithText:(id)arg0 attributedText:(id)arg1 style:(NSInteger)arg2 ;
-(id)initWithAttributedText:(id)arg0 style:(NSInteger)arg1 ;
-(id)initWithText:(id)arg0 style:(NSInteger)arg1 ;
-(void)setFontWeight:(CGFloat)arg0 ;


@end


#endif