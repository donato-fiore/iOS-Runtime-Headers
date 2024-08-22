// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UILABELATTRIBUTEDSTRINGCONTENT_H
#define _UILABELATTRIBUTEDSTRINGCONTENT_H

@class UILabelContent, NSAttributedString;



@interface _UILabelAttributedStringContent : UILabelContent {
    NSAttributedString *_attributedString;
}




-(BOOL)_isContentEqualToContent:(id)arg0 ;
-(BOOL)isAttribute:(id)arg0 uniformlyEqualToValue:(id)arg1 ;
-(BOOL)isAttributed;
-(BOOL)isEqualToAttributedString:(id)arg0 ;
-(BOOL)isEqualToContent:(id)arg0 byAttribute:(id)arg1 ;
-(BOOL)isEqualToString:(id)arg0 ;
-(BOOL)isNil;
-(BOOL)isWidthVariant;
-(NSInteger)length;
-(NSUInteger)hash;
-(id)attributedString;
-(id)attributedStringContent;
-(id)contentByApplyingAttribute:(id)arg0 value:(id)arg1 toRange:(struct _NSRange )arg2 ;
-(id)contentWithAttributedString:(id)arg0 ;
-(id)contentWithString:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultValueForAttribute:(id)arg0 ;
-(id)initWithAttributedString:(id)arg0 defaultAttributes:(id)arg1 ;
-(id)string;


@end


#endif