// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTLABEL_H
#define UITEXTLABEL_H



#import "UILabel.h"

@interface UITextLabel : UILabel



-(BOOL)centersHorizontally;
-(BOOL)textAutoresizesToFit;
-(BOOL)wrapsText;
-(NSInteger)alignment;
-(float)minFontSize;
-(id)color;
-(id)highlightedColor;
-(struct CGSize )ellipsizedTextSize;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setAlignment:(NSInteger)arg0 ;
-(void)setCentersHorizontally:(BOOL)arg0 ;
-(void)setColor:(id)arg0 ;
-(void)setHighlightedColor:(id)arg0 ;
-(void)setMinFontSize:(float)arg0 ;
-(void)setTextAutoresizesToFit:(BOOL)arg0 ;
-(void)setWrapsText:(BOOL)arg0 ;


@end


#endif