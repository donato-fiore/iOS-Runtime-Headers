// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISEARCHSUGGESTIONITEM_DCI_H
#define _UISEARCHSUGGESTIONITEM_DCI_H

@class NSString, NSAttributedString;
@protocol _UISearchSuggestion_dci;


#import "UISearchSuggestionItem.h"
#import "UIImage.h"

@interface _UISearchSuggestionItem_dci : UISearchSuggestionItem <_UISearchSuggestion_dci>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *iconImage;
@property (readonly, nonatomic) NSAttributedString *localizedAttributedSuggestion;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *localizedSuggestion;
@property (retain, nonatomic) id *representedObject;
@property (readonly) Class superclass;




@end


#endif