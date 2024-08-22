// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDMODIFYPROTOTYPECHANGE_H
#define TSDMODIFYPROTOTYPECHANGE_H

@class NSString;
@protocol TSDPrototypeChange, TSSPropertySource;

#import <Foundation/Foundation.h>

#import "TSDPropertySourceForModifyPrototypeChange.h"
#import "TSSPropertyMap.h"
#import "TSSMutablePropertySet.h"

@interface TSDModifyPrototypeChange : NSObject <TSDPrototypeChange>

 {
    TSDPropertySourceForModifyPrototypeChange *mPropertySourceBeforeChange;
    TSDPropertySourceForModifyPrototypeChange *mPropertySourceAfterChange;
}


@property (readonly, retain) TSSPropertyMap *changedPropertyMapAfterChange; // ivar: mChangedPropertyMapAfterChange
@property (readonly, retain) TSSPropertyMap *changedPropertyMapBeforeChange; // ivar: mChangedPropertyMapBeforeChange
@property (readonly, retain) TSSMutablePropertySet *changedPropertySet; // ivar: mChangedPropertySet
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain) TSSMutablePropertySet *i_propertiesWithOldValuesRecordedButNotNewValues; // ivar: mPropertiesWithOldValuesRecordedButNotNewValues
@property (readonly, retain) NSObject<TSSPropertySource> *propertiesAfterChange;
@property (readonly, retain) NSObject<TSSPropertySource> *propertiesBeforeChange;
@property (readonly, retain) id *prototype; // ivar: mPrototype
@property (readonly) BOOL prototypeIsBeingDeleted;
@property (readonly) BOOL prototypeIsBeingModified;
@property (readonly) BOOL prototypeIsBeingReplaced;
@property (readonly, retain) id *replacement;
@property (readonly) Class superclass;


-(BOOL)propertiesAreChanging:(id)arg0 ;
-(BOOL)propertyIsChanging:(int)arg0 ;
-(id)initModifyPrototypeChangeForPrototype:(id)arg0 ;
-(void)dealloc;


@end


#endif