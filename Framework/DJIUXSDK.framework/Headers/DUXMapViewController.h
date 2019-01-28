//
//  DUXMapViewController.h
//  DJIUXSDK
//
//  Copyright © 2016 DJI. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <DJIUXSDK/DUXContentViewController.h>
@class DUXMapWidget;


/**
 *  Subclass of DUXContentViewController which manages the logic for showing  the
 *  map view.
 */
@interface DUXMapViewController : DUXContentViewController


/**
 *  Instance of the map widget which is shown.
 */
@property (readonly, nonatomic) DUXMapWidget *mapWidget;


/**
 *  Shows the fly zone legend. The fly zone legend indicates the color for all zone
 *  categories and self-unlock zones.
 */
@property (nonatomic, assign) BOOL showFlyZoneLegend;

@end
