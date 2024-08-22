// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFINDNAVIGATORVIEWCONTROLLER_H
#define _UIFINDNAVIGATORVIEWCONTROLLER_H

@class NSArray, NSString;
@protocol _UIFindNavigatorViewDelegate, UIPredictiveViewController, _UIFindNavigatorViewControllerDelegate;


#import "UIInputViewController.h"
#import "_UIFindNavigatorView.h"
#import "UITextSearchOptions.h"
#import "UIFindSession.h"
#import "UIResponder.h"

@interface _UIFindNavigatorViewController : UIInputViewController <_UIFindNavigatorViewDelegate, UIPredictiveViewController>

 {
    NSInteger _assistantBarStyle;
    _UIFindNavigatorView *_findNavigatorView;
    NSArray *_extraKeyCommands;
    NSString *_lastSearchQuery;
    UITextSearchOptions *_lastSearchOptions;
    BOOL _performingReplacement;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *displayedCandidates;
@property (readonly, nonatomic) _UIFindNavigatorView *findNavigatorView;
@property (weak, nonatomic) NSObject<_UIFindNavigatorViewControllerDelegate> *findNavigatorViewControllerDelegate; // ivar: _findNavigatorViewControllerDelegate
@property (retain, nonatomic) UIFindSession *findSession; // ivar: _findSession
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hostedInKeyboard;
@property (weak, nonatomic) UIResponder *parentResponder; // ivar: _parentResponder
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger tintTechnique; // ivar: _tintTechnique


-(BOOL)_canShowWhileLocked;
-(BOOL)_dismissesKeyboardOnReturn;
-(BOOL)allowsCompactAssistantBar;
-(BOOL)findNavigatorShouldShowReplacementOption:(id)arg0 ;
-(BOOL)isVisibleForInputDelegate:(id)arg0 inputViews:(id)arg1 ;
-(CGFloat)preferredHeightForTraitCollection:(id)arg0 ;
-(CGFloat)preferredWidthForTraitCollection:(id)arg0 ;
-(id)_configuredSearchOptions;
-(id)keyCommands;
-(id)nextResponder;
-(id)parentFocusEnvironment;
-(id)traitCollection;
-(id)undoManager;
-(void)_didEnterReplacementString:(id)arg0 ;
-(void)_didEnterSearchQuery:(id)arg0 ;
-(void)_finishSearchingOnResignIfNecessary;
-(void)_handleDone:(id)arg0 ;
-(void)_handleHighlightPreviousResult:(id)arg0 ;
-(void)_handleInsertNewline:(id)arg0 ;
-(void)_handleSearchReturn:(id)arg0 ;
-(void)_performAutoSearch;
-(void)_performSearchWithQuery:(id)arg0 options:(id)arg1 ;
-(void)_recomputeConfiguredSearchOptions;
-(void)_replaceFieldDidChange:(id)arg0 ;
-(void)_searchTextFieldChanged:(id)arg0 ;
-(void)_textViewDidChangeNotification:(id)arg0 ;
-(void)_updateReplaceButtonEnabled;
-(void)_updateResultsCount;
-(void)_updateReturnKeyType;
-(void)_windowDidChangeToFirstResponder:(id)arg0 ;
-(void)buildMenuWithBuilder:(id)arg0 ;
-(void)find:(id)arg0 ;
-(void)findAndReplace:(id)arg0 ;
-(void)findNavigator:(id)arg0 didChangeMode:(NSInteger)arg1 ;
-(void)findNavigator:(id)arg0 didInvokeNextResultInDirection:(NSInteger)arg1 ;
-(void)findNavigator:(id)arg0 didInvokeReplaceReplacingAll:(BOOL)arg1 ;
-(void)findNavigatorDidInvalidateSearchSession:(id)arg0 ;
-(void)findNext:(id)arg0 ;
-(void)findPrevious:(id)arg0 ;
-(void)loadView;
-(void)resignFirstResponderAndFinishSearching;
-(void)setAssistantBarStyle:(NSInteger)arg0 ;
-(void)updateViewForActiveFindSession;
-(void)viewDidLoad;
-(void)viewWillMoveToWindow:(id)arg0 ;


@end


#endif