// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIWEBSELECTTABLEVIEWCONTROLLER_H
#define UIWEBSELECTTABLEVIEWCONTROLLER_H

@class NSArray, DOMHTMLSelectElement, NSString;
@protocol UIKeyInput;


#import "UITableViewController.h"
#import "UIWebSelectPopover.h"
#import "UITextInputPasswordRules.h"

@interface UIWebSelectTableViewController : UITableViewController <UIKeyInput>

 {
    NSUInteger _singleSelectionIndex;
    NSUInteger _singleSelectionSection;
    BOOL _allowsMultipleSelection;
    CGFloat _fontSize;
    CGFloat _maximumTextWidth;
    NSInteger _textAlignment;
}


@property (retain, nonatomic) NSArray *_cachedItems; // ivar: _cachedItems
@property (retain, nonatomic) NSArray *_groupsAndOptions; // ivar: _groupsAndOptions
@property (nonatomic) UIWebSelectPopover *_popover; // ivar: _popover
@property (retain, nonatomic) DOMHTMLSelectElement *_selectionNode; // ivar: _selectionNode
@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *textContentType;


-(BOOL)_isEmpty;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_optionsForSection:(NSInteger)arg0 ;
-(id)initWithDOMHTMLSelectNode:(id)arg0 cachedItems:(id)arg1 singleSelectionIndex:(NSUInteger)arg2 multipleSelection:(BOOL)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_setupGroupsAndOptions;
-(void)dealloc;
-(void)deleteBackward;
-(void)insertText:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif