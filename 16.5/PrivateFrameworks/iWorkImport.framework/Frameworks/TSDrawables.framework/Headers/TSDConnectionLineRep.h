// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDCONNECTIONLINEREP_H
#define TSDCONNECTIONLINEREP_H



#import "TSDShapeRep.h"
#import "TSDPathSource.h"

@interface TSDConnectionLineRep : TSDShapeRep {
    TSDPathSource *mLastPathSource;
}




-(BOOL)shouldSetPathSourceWhenChangingInfoGeometry;
-(id)connectionLineLayout;
-(void)updateFromLayout;


@end


#endif