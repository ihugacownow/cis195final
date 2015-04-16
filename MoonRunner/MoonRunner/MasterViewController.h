//
//  MasterViewController.h
//  MoonRunner
//
//  Created by Wu Wai Choong on 4/16/15.
//  Copyright (c) 2015 Wai Wu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

