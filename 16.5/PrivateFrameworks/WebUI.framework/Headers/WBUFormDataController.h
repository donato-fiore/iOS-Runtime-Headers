// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBUFORMDATACONTROLLER_H
#define WBUFORMDATACONTROLLER_H

@class WBSFormDataController, WBSFormAutoFillCorrectionManager, WBSFormAutoFillParsecFeedbackProcessor, NSString, WBSCreditCardData, CNContact;
@protocol MCProfileConnectionObserver, WBSFormAutoFillCorrectionManagerDelegate, WBSFormFieldClassificationCorrectorDelegate;



@interface WBUFormDataController : WBSFormDataController <MCProfileConnectionObserver, WBSFormAutoFillCorrectionManagerDelegate, WBSFormFieldClassificationCorrectorDelegate>

 {
    BOOL _savePending;
    WBSFormAutoFillCorrectionManager *_autoFillCorrectionManager;
    WBSFormAutoFillParsecFeedbackProcessor *_autoFillFeedbackProcessor;
    int _cachedAutoFillRestrictionValue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WBSCreditCardData *lastFilledCreditCardData; // ivar: _lastFilledCreditCardData
@property (readonly, nonatomic) CNContact *me;
@property (nonatomic) BOOL shouldAutoFillFromAddressBook;
@property (nonatomic) BOOL shouldAutoFillFromCreditCardData;
@property (nonatomic) BOOL shouldAutoFillPasswords;
@property (readonly) Class superclass;


+(BOOL)contactIsMe:(id)arg0 ;
+(BOOL)contactStoreHasMeCard:(id)arg0 ;
+(BOOL)keychainSyncEnabled;
+(id)_stringForCNContactObject:(id)arg0 contactObjectComponent:(id)arg1 ;
+(id)localizedLowercaseContactProperty:(id)arg0 ;
+(id)valueStringForMatch:(id)arg0 ;
-(BOOL)_saveUser:(id)arg0 password:(id)arg1 isGeneratedPassword:(BOOL)arg2 forURL:(id)arg3 formType:(NSUInteger)arg4 promptingPolicy:(NSInteger)arg5 webView:(id)arg6 completionHandler:(id)arg7 ;
-(BOOL)_shouldSaveCreditCardDataInWebView:(id)arg0 frame:(id)arg1 ;
-(BOOL)_shouldSaveUsernamesAndPasswordsForURL:(id)arg0 inWebView:(id)arg1 ;
-(BOOL)_shouldTryToSaveCredentialsFromLastForm:(id)arg0 currentFormMetadata:(id)arg1 frame:(id)arg2 ;
-(BOOL)_updateCredentialsWithGeneratedPasswordForForm:(id)arg0 inWebView:(id)arg1 frame:(id)arg2 ;
-(BOOL)_webView:(id)arg0 formSubmission:(BOOL)arg1 willSubmitNewAccountOrChangePasswordFormWithMetadata:(id)arg2 shouldPreferAnnotatedCredentials:(BOOL)arg3 fromFrame:(id)arg4 submissionHandler:(id)arg5 ;
-(BOOL)_webView:(id)arg0 saveCredentialsForURL:(id)arg1 formSubmission:(BOOL)arg2 formWithMetadata:(id)arg3 fromFrame:(id)arg4 username:(id)arg5 password:(id)arg6 submissionHandler:(id)arg7 ;
-(BOOL)_webView:(id)arg0 saveUsernameAndPasswordForURL:(id)arg1 formType:(NSUInteger)arg2 inFrame:(id)arg3 username:(id)arg4 password:(id)arg5 isGeneratedPassword:(BOOL)arg6 confirmOverwritingCurrentPassword:(BOOL)arg7 submissionHandler:(id)arg8 ;
-(BOOL)_webView:(id)arg0 saveUsernameAndPasswordFromForm:(id)arg1 inFrame:(id)arg2 confirmOverwritingCurrentPassword:(BOOL)arg3 shouldPreferAnnotatedCredentials:(BOOL)arg4 submissionHandler:(id)arg5 ;
-(BOOL)_webView:(id)arg0 willSubmitFormContainingCreditCardData:(id)arg1 fromFrame:(id)arg2 submissionHandler:(id)arg3 ;
-(BOOL)_webView:(id)arg0 willSubmitLoginFormWithMetadata:(id)arg1 formSubmission:(BOOL)arg2 fromFrame:(id)arg3 submissionHandler:(id)arg4 ;
-(BOOL)_webView:(id)arg0 willSubmitStandardFormWithMetadata:(id)arg1 fromFrame:(id)arg2 submissionHandler:(id)arg3 ;
-(BOOL)autoFillCorrectionManagerShouldProcessFeedback:(id)arg0 ;
-(BOOL)formFieldClassificationCorrector:(id)arg0 hasAddressBookDataForAddressBookLabel:(id)arg1 ;
-(BOOL)mayFillCreditCardDataInFrame:(id)arg0 ;
-(BOOL)mayPreFillInFrame:(id)arg0 ;
-(BOOL)shouldAllowPasswordAutoFillOnURL:(id)arg0 allowExternalCredentials:(BOOL)arg1 ;
-(BOOL)shouldAutoFillFromCreditCardDataInFrame:(id)arg0 ;
-(BOOL)shouldAutoFillFromPreviousData;
-(BOOL)shouldAutoGeneratePasswordsForURL:(id)arg0 inWebView:(id)arg1 ;
-(BOOL)webView:(id)arg0 frame:(id)arg1 willNavigateFromForm:(id)arg2 bySubmitting:(BOOL)arg3 processMetadataCorrections:(BOOL)arg4 uniqueIDsOfControlsThatWereAutoFilled:(id)arg5 submissionHandler:(id)arg6 ;
-(BOOL)whiteListAllowsURL:(id)arg0 ;
-(id)_addressBookMatchesForFamilyNameForContact:(id)arg0 ;
-(id)_addressBookMatchesForFullNameForContact:(id)arg0 ;
-(id)_addressBookMatchesForGivenNameForContact:(id)arg0 ;
-(id)_addressBookMatchesForMiddleNameForContact:(id)arg0 ;
-(id)_autoFillCorrectionManager;
-(id)_credentialMatchesEligibleForUpdateForURL:(id)arg0 username:(id)arg1 oldPassword:(id)arg2 ;
-(id)_detailTextForPromptToSaveCard:(id)arg0 ;
-(id)_relatedCredentialMatchesToUpdateForUser:(id)arg0 protectionSpace:(id)arg1 oldSavedAccount:(*id)arg2 matchesForCurrentHost:(*id)arg3 matchesForAssociatedDomains:(*id)arg4 ;
-(id)_relatedCredentialMatchesToUpdateForUser:(id)arg0 protectionSpace:(id)arg1 oldSavedAccount:(*id)arg2 matchesForCurrentHost:(*id)arg3 matchesForAssociatedDomains:(*id)arg4 haveExistingCredentialWithSameUsernameAndDifferentPassword:(*BOOL)arg5 ;
-(id)_titleTextForWarning:(id)arg0 ;
-(id)addressBookMatchesForProperty:(id)arg0 key:(id)arg1 label:(id)arg2 ;
-(id)addressBookMatchesForProperty:(id)arg0 key:(id)arg1 label:(id)arg2 contact:(id)arg3 ;
-(id)addressBookMatchesForProperty:(id)arg0 key:(id)arg1 label:(id)arg2 partialString:(id)arg3 contact:(id)arg4 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg5 ;
-(id)completionDBPath;
-(id)feedbackProcessorForAutoFillCorrectionManager:(id)arg0 ;
-(id)formAutoFillCorrectionManagerForFormFieldClassificationCorrector:(id)arg0 ;
-(id)formFieldClassificationCorrector:(id)arg0 bestAddressBookLabelForControlValue:(id)arg1 ;
-(id)initWithAggressiveKeychainCaching:(BOOL)arg0 ;
-(id)savedAccountFromMatches:(id)arg0 completingPartialUserInLoginForm:(id)arg1 ;
-(id)uniqueIDOfContact:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_processCorrectionsForFormWithDomain:(id)arg0 formMetadata:(id)arg1 uniqueIDsOfControlsThatWereAutoFilled:(id)arg2 ;
-(void)_promptToUpdateRelatedCredentials:(id)arg0 urlHost:(id)arg1 relatedCredentialsHighLevelDomain:(id)arg2 webView:(id)arg3 completionHandler:(id)arg4 ;
-(void)_showCreditCardPromptForWebView:(id)arg0 creditCard:(id)arg1 completionHandler:(id)arg2 ;
-(void)_showPasswordPromptForWebView:(id)arg0 formType:(NSUInteger)arg1 username:(id)arg2 host:(id)arg3 hasCredentialForCurrentHost:(BOOL)arg4 existingCredentialMatchesForCurrentHost:(id)arg5 otherSubdomainCredentialMatches:(id)arg6 haveExistingCredentialWithSameUsernameAndDifferentPassword:(BOOL)arg7 completionHandler:(id)arg8 ;
-(void)_showPromptToSaveCreditCardSecurityCodeForWebView:(id)arg0 cardNumber:(id)arg1 securityCode:(id)arg2 completionHandler:(id)arg3 ;
-(void)_warnAboutWeakPasswordIfNecessaryWithWebView:(id)arg0 savedAccount:(id)arg1 protectionSpace:(id)arg2 ;
-(void)clearAllFormCredentials;
-(void)dealloc;
-(void)didFillFieldWithGeneratedPassword:(id)arg0 inFrame:(id)arg1 webView:(id)arg2 ;
-(void)didFillFormWithGeneratedPassword:(id)arg0 inWebView:(id)arg1 frame:(id)arg2 ;
-(void)gatherAutoFillDisplayDataWithTextField:(id)arg0 displayedInQuickType:(BOOL)arg1 prefix:(id)arg2 contact:(id)arg3 completionHandler:(id)arg4 ;
-(void)gatherValuesForForm:(id)arg0 focusedTextFieldMetadata:(id)arg1 inFrame:(id)arg2 multiRoundAutoFillManager:(id)arg3 completionHandler:(id)arg4 ;
-(void)performWhenReady:(id)arg0 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)saveCompletionDBSoon;
-(void)saveUnsubmittedGeneratedPasswordInFrame:(id)arg0 form:(id)arg1 closingWebView:(BOOL)arg2 ;
-(void)saveUser:(id)arg0 password:(id)arg1 forURL:(id)arg2 andPromptToUpdateRelatedCredentialsWithWebView:(id)arg3 ;
-(void)textDidChangeInForm:(id)arg0 inWebView:(id)arg1 frame:(id)arg2 ;


@end


#endif