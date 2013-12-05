#import "GestureSetupController.h"
#import "GestureRecognitionController.h"
#import "MultitouchManager.h"
@class GestureSetupController, GestureRecognitionController;

@interface AppController : NSObject <NSApplicationDelegate>

@property GestureSetupController *gestureSetupController;
@property GestureRecognitionController *gestureRecognitionController;

- (void)awakeFromNib;
- (IBAction)closeAndQuit:(id)sender;
- (void)applicationDidFinishLaunching:(NSNotification *)notification;
- (BOOL)applicationShouldHandleReopen:(NSApplication *)sender hasVisibleWindows:(BOOL)flag;

@end
