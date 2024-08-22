// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFACTIONDRAWERUTILITIES_H
#define WFACTIONDRAWERUTILITIES_H


#import <Foundation/Foundation.h>


@interface WFActionDrawerUtilities : NSObject



+(id)activitySectionsForDonations:(id)arg0 ;
+(id)appSectionsForActionSections:(id)arg0 ;
+(id)appSectionsForDonations:(id)arg0 ;
+(id)deduplicateAppSections:(id)arg0 ;
+(id)filterAppSections:(id)arg0 searchQuery:(id)arg1 ;
+(id)localizedAppNames;
+(id)suggestionSectionsForDonations:(id)arg0 excludingConvertedLinkActions:(BOOL)arg1 ;


@end


#endif