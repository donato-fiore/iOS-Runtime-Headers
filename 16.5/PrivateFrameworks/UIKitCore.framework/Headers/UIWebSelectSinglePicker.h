// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIWEBSELECTSINGLEPICKER_H
#define UIWEBSELECTSINGLEPICKER_H

@class DOMHTMLSelectElement, NSArray, NSString;
@protocol UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate, UIWebSelectedItemPrivate;


#import "UIPickerView.h"

@interface UIWebSelectSinglePicker : UIPickerView <UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate>

 {
    DOMHTMLSelectElement *_selectNode;
    NSArray *_optionItems;
    id<UIWebSelectedItemPrivate> *_selectedOptionItem;
    NSInteger _selectedIndex;
    id<UIWebSelectedItemPrivate> *_optionToSelectWhenDone;
    NSInteger _indexToSelectWhenDone;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)controlView;
-(id)initWithDOMHTMLSelectElement:(id)arg0 allItems:(id)arg1 ;
-(id)pickerView:(id)arg0 attributedTitleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(void)dealloc;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;


@end


#endif