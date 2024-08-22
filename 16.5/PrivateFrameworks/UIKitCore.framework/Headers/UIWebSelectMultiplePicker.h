// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIWEBSELECTMULTIPLEPICKER_H
#define UIWEBSELECTMULTIPLEPICKER_H

@class NSArray, DOMHTMLSelectElement, NSString;
@protocol UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate, UIWebSelectedItemPrivate;


#import "UIPickerView.h"

@interface UIWebSelectMultiplePicker : UIPickerView <UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate>

 {
    NSUInteger _singleSelectionIndex;
    CGFloat _fontSize;
    CGFloat _maximumTextWidth;
    NSInteger _textAlignment;
    CGFloat _layoutWidth;
}


@property (retain, nonatomic) NSArray *_cachedItems; // ivar: _cachedItems
@property (retain, nonatomic) DOMHTMLSelectElement *_selectionNode; // ivar: _selectionNode
@property (retain, nonatomic) NSObject<UIWebSelectedItemPrivate> *_singleSelectionItem; // ivar: _singleSelectionItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)controlView;
-(id)initWithDOMHTMLSelectElement:(id)arg0 cachedItems:(id)arg1 singleSelectionItem:(id)arg2 singleSelectionIndex:(NSUInteger)arg3 multipleSelection:(BOOL)arg4 ;
-(id)pickerView:(id)arg0 viewForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 reusingView:(id)arg3 ;
-(int)_itemIndexForRowIndex:(int)arg0 ;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(void)dealloc;
-(void)layoutSubviews;
-(void)pickerView:(id)arg0 row:(int)arg1 column:(int)arg2 checked:(BOOL)arg3 ;


@end


#endif