// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISHORTDEFINITIONVIEW_H
#define _UISHORTDEFINITIONVIEW_H



#import "UIView.h"
#import "_UIDefinitionValue.h"
#import "UITextView.h"

@interface _UIShortDefinitionView : UIView {
    _UIDefinitionValue *_definitionValue;
    UITextView *_definitionTextView;
}


@property (retain, nonatomic) _UIDefinitionValue *definitionValue;


-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif