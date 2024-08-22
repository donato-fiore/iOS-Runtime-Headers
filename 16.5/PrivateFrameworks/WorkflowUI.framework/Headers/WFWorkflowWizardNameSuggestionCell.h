// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWWIZARDNAMESUGGESTIONCELL_H
#define WFWORKFLOWWIZARDNAMESUGGESTIONCELL_H

@class UITableViewCell, NSString, UILabel, UIStackView, NSArray;
@protocol WFWorkflowWizardSuggestedPhraseViewDelegate, WFWorkflowWizardNameSuggestionCellDelegate;



@interface WFWorkflowWizardNameSuggestionCell : UITableViewCell <WFWorkflowWizardSuggestedPhraseViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFWorkflowWizardNameSuggestionCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILabel *infoLabel; // ivar: _infoLabel
@property (copy, nonatomic) NSString *infoText;
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (copy, nonatomic) NSArray *suggestedPhrases; // ivar: _suggestedPhrases
@property (retain, nonatomic) NSArray *suggestionsViews; // ivar: _suggestionsViews
@property (readonly) Class superclass;


+(CGFloat)preferredHeightForWidth:(CGFloat)arg0 infoText:(id)arg1 suggestedPhrases:(id)arg2 ;
+(id)infoFont;
+(id)suggestionsFont;
+(id)suggestionsText;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)workflowWizardSuggestedPhraseViewDidSelectSuggestedPhrase:(id)arg0 ;


@end


#endif