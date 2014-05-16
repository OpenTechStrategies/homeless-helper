//
//  LocationSearchViewController.h
//  Homeless Helper
//
//  Created by Jessi on 9/23/12.
//  Copyright (c) 2012 JJAppCo, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>
#import "MapLocation.h"
#import "CustomListTableViewCell.h"
#import "FoursquareVenueSearch.h"
#import "GoogleAddressGeocodingSearch.h"

@class FirstViewController;

@interface LocationSearchViewController : UIViewController <UISearchBarDelegate, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate, MKMapViewDelegate, FoursquareVenueSearchDelegate, GoogleAddressGeocodingSearchDelegate>
{
    
}

@property (nonatomic, retain) FoursquareVenueSearch *foursquareVenueSearch;
@property (nonatomic, retain) GoogleAddressGeocodingSearch *googleAddressGeocodingSearch;

@property (nonatomic, retain) NSMutableArray *placeArray;

@property (nonatomic, retain) CLLocation *currentLocation, *placeLocation;

@property (nonatomic, retain) UIBarButtonItem *doneBarButtonItem;

@property (nonatomic, retain) UISegmentedControl *placeTypeSegmentedControl;

@property (nonatomic, retain) UISearchBar *searchBar;

@property (nonatomic, retain) UITableView *searchResultsTableView;

@property (nonatomic, retain) MKMapView *mapView;

@property (nonatomic) MKCoordinateRegion defaultRegion;

@property (nonatomic, retain) NSString *placeType;

@end