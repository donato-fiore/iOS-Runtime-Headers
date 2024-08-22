// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCALENDARPICKERPARAMETER_H
#define WFCALENDARPICKERPARAMETER_H

@class INObjectCollection, NSString;
@protocol WFDynamicEnumerationDataSource, OS_dispatch_queue;


#import "WFDynamicEnumerationParameter.h"

@interface WFCalendarPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource>



@property (readonly, nonatomic) BOOL allowsAllCalendars; // ivar: _allowsAllCalendars
@property (retain, nonatomic) INObjectCollection *calendarsCollection; // ivar: _calendarsCollection
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id *defaultSerializedCalendarRepresentation; // ivar: _defaultSerializedCalendarRepresentation
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hidesReadOnlyCalendars; // ivar: _hidesReadOnlyCalendars
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // ivar: _stateQueue
@property (readonly) Class superclass;


-(Class)singleStateClass;
-(id)enumeration:(id)arg0 accessoryColorForPossibleState:(id)arg1 ;
-(id)enumeration:(id)arg0 localizedLabelForPossibleState:(id)arg1 ;
-(id)initWithDefinition:(id)arg0 ;
-(void)clearPossibleStates;
-(void)loadDefaultSerializedRepresentationForEnumeration:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadPossibleStatesForEnumeration:(id)arg0 searchTerm:(id)arg1 completionHandler:(id)arg2 ;
-(void)possibleStatesDidChange;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;


@end


#endif