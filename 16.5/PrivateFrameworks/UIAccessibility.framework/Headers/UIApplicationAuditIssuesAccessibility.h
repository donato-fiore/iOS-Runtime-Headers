// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIAPPLICATIONAUDITISSUESACCESSIBILITY_H
#define UIAPPLICATIONAUDITISSUESACCESSIBILITY_H


#import <Foundation/Foundation.h>


@interface UIApplicationAuditIssuesAccessibility : NSObject



+(BOOL)_axAuditElementIsClipping:(id)arg0 ;
+(BOOL)_axAuditSetSwizzledImp:(*unk)arg0 orOrigImp:(*unk)arg1 forMethod:(struct objc_method *)arg2 withSwizzling:(BOOL)arg3 ;
+(BOOL)_axAuditShouldElementBeCheckedForClipping:(id)arg0 ;
+(BOOL)_axAuditSwiftUIViewHasText:(id)arg0 ;
+(BOOL)_axAuditSwiftUIViewIsClipping:(id)arg0 ;
+(BOOL)_axAuditSwizzleAwayContentSize:(BOOL)arg0 ;
+(BOOL)_axAuditViewIsSwiftUI:(id)arg0 ;
+(id)_accessibilityGetAllSubviews:(id)arg0 withFiltering:(BOOL)arg1 ;
+(id)_accessibilityGetAllSwiftUISubviews:(id)arg0 withFiltering:(BOOL)arg1 ;
+(id)_axAuditContrastDetectionForSwiftUIView:(id)arg0 ;
+(id)_axAuditCreateElementInfoDictionariesForSubviews:(id)arg0 ;
+(id)_axAuditDereferenceCellsForViewHierarchy:(id)arg0 ;
+(id)_axAuditFindAllCollectionViewsInHierarchyForElements:(id)arg0 ;
+(id)_axAuditFindAllCollectionViewsInHierarchyForView:(id)arg0 ;
+(id)_axAuditFindAllTablesInHierarchyForElements:(id)arg0 ;
+(id)_axAuditFindAllTablesInHierarchyForView:(id)arg0 ;
+(id)_axAuditFindDescendantInaccessibleElements:(id)arg0 honorsGroups:(BOOL)arg1 ;
+(id)_axAuditFindElementsNotSupportingDynamicText:(id)arg0 ;
+(id)_axAuditFindFrontmostViewControllerForHierarchy:(id)arg0 ;
+(id)_axAuditGetAllFontSizes;
+(id)_axAuditGetAllTableAndCollectionViewsForHierarchy:(id)arg0 ;
+(id)_axAuditGetAttrLabelFromSwiftUIView:(id)arg0 ;
+(id)_axAuditGetCellReferenceMapTable;
+(id)_axAuditGetFontAttrFromAttributedString:(id)arg0 ;
+(id)_axAuditGetFontForElement:(id)arg0 ;
+(id)_axAuditGetFontForSwiftUIView:(id)arg0 ;
+(id)_axAuditGetIndexPathsDictionaryForCaptureActionForView:(id)arg0 ;
+(id)_axAuditGetIndexPathsDictionaryForUpdateActionForView:(id)arg0 ;
+(id)_axAuditGetOriginalContentOffsetForView:(id)arg0 ;
+(id)_axAuditGetTextFromObject:(id)arg0 ;
+(id)_axAuditHelperToFindRelevantSubviewsOfCellView:(id)arg0 ;
+(id)_axAuditMatchReferenceSubviews:(id)arg0 againstNewSubviews:(id)arg1 ;
+(id)_axAuditUnlabeledIssueDictForElement:(id)arg0 honorsGroups:(BOOL)arg1 ;
+(struct CGRect )_axAuditBoundsForRange:(struct _NSRange )arg0 onSwiftUIView:(id)arg1 ;
+(void)_axAuditCaptureReferenceToCellsForViewHierarchy:(id)arg0 ;
+(void)_axAuditCheckElementForClipping:(id)arg0 storeIntoSet:(id)arg1 ;
+(void)_axAuditCheckSwiftUIViewForClipping:(id)arg0 storeIntoSet:(id)arg1 ;
+(void)_axAuditForHierarchy:(id)arg0 withTableOrCollectionViews:(id)arg1 performAction:(id)arg2 performBlockOnEachCell:(id)arg3 ;
+(void)_axAuditRemoveUIViewsFromArray:(id)arg0 usingFilter:(id)arg1 ;
+(void)_axAuditRemoveUnsupportedCategories:(id)arg0 ;
+(void)_axAuditSpinRunloopForDuration:(CGFloat)arg0 ;
+(void)_axAuditStoreClippedElementsIntoSet:(id)arg0 forReferenceMatches:(id)arg1 ;
+(void)_axAuditStoreFontForElement:(id)arg0 intoDictionary:(id)arg1 forCurrentFont:(id)arg2 ;
+(void)_axAuditStoreFontForSwiftUIView:(id)arg0 intoDictionary:(id)arg1 forCurrentFont:(id)arg2 ;
+(void)_axAuditStoreFontsIntoDictionary:(id)arg0 forReferenceMatches:(id)arg1 ;
+(void)_axAuditUIKitShouldReportFontSize:(id)arg0 ;
+(void)_axAuditUpdateClippingStatusForReferenceMatches:(id)arg0 ;
+(void)_axAuditUpdateFontsForReferenceMatches:(id)arg0 forFontSize:(id)arg1 ;
+(void)_axAuditUpdateReferenceOfCellsForViewHierarchy:(id)arg0 forFontSize:(id)arg1 ;
+(void)_axAuditUpdateRowHeightForTableAndCollectionViewsOfElements:(id)arg0 ;


@end


#endif