// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUISIDEBANDSERIESMEDIACOLLECTION_H
#define VUISIDEBANDSERIESMEDIACOLLECTION_H



#import "VUIMediaCollection.h"
#import "VUITVSeriesManagedObject.h"

@interface VUISidebandSeriesMediaCollection : VUIMediaCollection

@property (retain, nonatomic) VUITVSeriesManagedObject *seriesManagedObject; // ivar: _seriesManagedObject


-(id)HLSColorCapability;
-(id)canonicalID;
-(id)colorCapability;
-(id)initWithMediaLibrary:(id)arg0 seriesManagedObject:(id)arg1 requestedProperties:(id)arg2 ;
-(id)isLocal;
-(id)seasonCount;
-(id)showIdentifier;
-(id)title;


@end


#endif