// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIALERTCONTROLLERTEXTFIELDVIEWCONTROLLER_H
#define _UIALERTCONTROLLERTEXTFIELDVIEWCONTROLLER_H

@class NSMutableArray, NSArray;
@protocol _UIAlertControllerTextFieldViewControllerContaining;


#import "UICollectionViewController.h"
#import "UIAlertControllerVisualStyle.h"
#import "UICollectionViewFlowLayout.h"

@interface _UIAlertControllerTextFieldViewController : UICollectionViewController {
    NSMutableArray *textFieldViews;
    BOOL _textFieldsCanBecomeFirstResponder;
    UIAlertControllerVisualStyle *_visualStyle;
    UICollectionViewFlowLayout *_collectionViewLayout;
}


@property (weak, nonatomic) NSObject<_UIAlertControllerTextFieldViewControllerContaining> *container; // ivar: _container
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (readonly) NSArray *textFields; // ivar: textFields
@property (nonatomic) BOOL textFieldsCanBecomeFirstResponder;
@property (nonatomic) UIAlertControllerVisualStyle *visualStyle;


-(BOOL)_canShowWhileLocked;
-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(BOOL)resignFirstResponder;
-(CGFloat)_bottomMarginForTextFields;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSInteger)numberOfTextFields;
-(id)addTextFieldWithPlaceholder:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)init;
-(id)textFieldAtIndex:(NSInteger)arg0 ;
-(id)textFieldContainerViews;
-(void)_returnKeyPressedInTextField:(id)arg0 ;
-(void)_updatePreferredContentSize;
-(void)removeAllTextFields;
-(void)updateTextFieldStyle;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif