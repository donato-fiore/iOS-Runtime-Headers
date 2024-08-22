// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCIMPORTUTIL_H
#define BRCIMPORTUTIL_H


#import <Foundation/Foundation.h>


@interface BRCImportUtil : NSObject



+(BOOL)reimportItemsBelowItemWithIdentifier:(id)arg0 error:(*id)arg1 ;
+(void)forceIngestionForItemID:(id)arg0 completionHandler:(id)arg1 ;
+(void)requestModificationOfItemIdentifier:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif