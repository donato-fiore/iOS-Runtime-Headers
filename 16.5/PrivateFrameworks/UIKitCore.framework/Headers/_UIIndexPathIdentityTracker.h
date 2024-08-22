// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIINDEXPATHIDENTITYTRACKER_H
#define _UIINDEXPATHIDENTITYTRACKER_H

@class NSMapTable;

#import <Foundation/Foundation.h>

#import "UITableView.h"
#import "UICollectionView.h"

@interface _UIIndexPathIdentityTracker : NSObject {
    UITableView *_tableView;
    UICollectionView *_collectionView;
    id *_identityBasedDataSource;
    NSMapTable *_mapping;
    BOOL _enforcesManualMapping;
}




-(id)_mappingIdentifierForSanitizedIndexPath:(id)arg0 ;
-(id)currentIndexPathForIdentifier:(id)arg0 ;
-(id)identifierForIndexPath:(id)arg0 ;
-(id)init;
-(id)initWithCollectionView:(id)arg0 ;
-(id)initWithTableView:(id)arg0 ;
-(void)_identifierBasedUpdateWithUpdateItems:(id)arg0 ;
-(void)_manuallyUpdateWithUpdateItems:(id)arg0 ;
-(void)enforceManualMapping;
-(void)reset;
-(void)updateWithUpdateItems:(id)arg0 ;


@end


#endif