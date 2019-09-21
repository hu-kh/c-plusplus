#include <iostream>
using namespace std;
#include <stdlib.h>
#include <string>

#include "functions/include.h"

int main(){

    menu();

    return 0;
}

/*#0*/
void menu()
{
    int x = 0;
    cout <<  getTitle("Laravel Framework 5.7.28");

    cout << "\t1  .......  options\n";
    cout << "\t2  .......  avilable commands\n";
    cout << "\t3  .......  auth\n";
    cout << "\t4  .......  cache\n";
    cout << "\t5  .......  config\n";
    cout << "\t6  .......  db\n";
    cout << "\t7  .......  event\n";
    cout << "\t8  .......  key\n";
    cout << "\t9  .......  make\n";
    cout << "\t10 .......  migrate\n";
    cout << "\t11 .......  notifications\n";
    cout << "\t12 .......  optimize\n";
    cout << "\t13 .......  package\n";
    cout << "\t14 .......  queue\n";
    cout << "\t15 .......  route\n";
    cout << "\t16 .......  schedule\n";
    cout << "\t17 .......  session\n";
    cout << "\t18 .......  storage\n";
    cout << "\t19 .......  telescope\n";
    cout << "\t20 .......  vendor\n";
    cout << "\t21 .......  view\n";
    cout << "\t22 .......  composer\n";
    cout << "\t23 .......  app\n";
    cout << "\t24 .......  others\n";
    cout << "--------------------------------------------\n";
    cout << ">> ";
    cin >> x;

    switch (x)
    {
        case 1:   clear(); options(); break;
        case 2:   clear(); avilableCommands(); break;
        case 3:   clear(); auth(); break;
        case 4:   clear(); cache(); break;
        case 5:   clear(); config(); break;
        case 6:   clear(); db(); break;
        case 7:   clear(); event(); break;
        case 8:   clear(); key(); break;
        case 9:   clear(); make(); break;
        case 10:  clear(); migrate(); break;
        case 11:  clear(); notifications(); break;
        case 12:  clear(); optimize(); break;
        case 13:  clear(); package(); break;
        case 14:  clear(); queue(); break;
        case 15:  clear(); route(); break;
        case 16:  clear(); schedule(); break;
        case 17:  clear(); session(); break;
        case 18:  clear(); storage(); break;
        case 19:  clear(); telescope(); break;
        case 20:  clear(); vendor(); break;
        case 21:  clear(); view(); break;
        case 22:  clear(); composer(); break;
        case 23:  clear(); app(); break;
        case 24:  clear(); others(); break;
        case 0:  clear(); exit(0); break;

        default: clear(); cout << "only between [1-24]\n"; break;
    }
}

/*#1*/
void options()
{
    int x = 0;
    cout << "\t1. -h, --help             Display this help message\n";
    cout << "\t2. -q, --quiet            Do not output any message\n";
    cout << "\t3. -V, --version          Display this application version\n";
    cout << "\t4. --ansi                 Force ANSI output\n";
    cout << "\t5. --no-ansi              Disable ANSI output\n";
    cout << "\t6. -n, --no-interaction   Do not ask any interactive question\n";
    cout << "\t7. --env[=ENV]            The environment the command should run under\n";
    cout << "\t8. -v|vv|vvv, --verbose   Increase the verbosity of messages: 1 for normal output,\n";
    cout << "\t                          2 for more verbose output and 3 for debug\n";
    cout << "--------------------------------------------\n";
    cout << ">> ";

    cin >> x;
    switch(x)
    {
       case 1:  clear(); system("php artisan -h"); break;
       case 2:  clear(); system("php artisan -q"); break;
       case 3:  clear(); system("php artisan -v"); break;
       case 4:  clear(); system("php artisan --ansi"); break;
       case 5:  clear(); system("php artisan --no-ansi"); break;
       case 6:  clear(); system("php artisan --no-interaction"); break;
       case 7:  clear(); system("php artisan --env[=ENV] "); break;
       case 8:  clear(); system("php artisan --verbose"); break;
       case 0:  clear(); menu(); break;

       default: cout << "only [0-8]\n";
    }

    again();
}

/*#2*/
void avilableCommands()
{
    int x = 0;
     cout << getTitle("Available Commands ");
     cout << "\t1.  clear-compiled  Remove the compiled class file\n";
     cout << "\t2.  down            Put the application into maintenance mode\n";
     cout << "\t3.  dump-server     Start the dump server to collect dump information.\n";
     cout << "\t4.  env             Display the current framework environment\n";
     cout << "\t5.  help            Displays help for a command\n";
     cout << "\t6.  inspire         Display an inspiring quote\n";
     cout << "\t7.  list            Lists commands\n";
     cout << "\t8.  migrate         Run the database migrations\n";
     cout << "\t9.  optimize        Cache the framework bootstrap files\n";
     cout << "\t10. preset          Swap the front-end scaffolding for the application\n";
     cout << "\t11. serve           Serve the application on the PHP development server\n";
     cout << "\t12. tinker          Interact with your application\n";
     cout << "\t13. up              Bring the application out of maintenance mode\n";
     cout << "--------------------------------------------\n";
     cout << ">> ";
        cin >> x;
         switch(x)
         {
            case 1:   clear(); system("php artisan clear-compiled"); break;
            case 2:   clear(); system("php artisan down"); break;
            case 3:   clear(); system("php artisan dump-server"); break;
            case 4:   clear(); system("php artisan env"); break;
            case 5:   clear(); system("php artisan help"); break;
            case 6:   clear(); system("php artisan inspire"); break;
            case 7:   clear(); system("php artisan list"); break;
            case 8:   clear(); system("php artisan migrate"); break;
            case 9:   clear(); system("php artisan optimize"); break;
            case 10:  clear(); system("php artisan preset"); break;
            case 11:  clear(); system("php artisan serve"); break;
            case 12:  clear(); system("php artisan tinker"); break;
            case 13:  clear(); system("php artisan up"); break;
            case 0:   clear(); menu(); break;

            default: cout << "only [0-13] \n";
         }

         again();
}

/*#3*/
void auth()
{
    int x = 0;
    cout << getTitle("Auth");
    cout << "\t1. auth:clear-resets   Flush expired password reset tokens\n";
    cout << "--------------------------------------------\n";
    cout << ">> ";
    cin >> x;
    switch(x)
    {
        case 1:  clear(); system("php artisan auth:clear-resets"); break;
        case 0:  clear(); menu(); break;
        default: cout << "only [0-1] \n"; break;
    }

    again();
}

/*#4*/
void cache()
{
    int x = 0;
    cout << getTitle("Cache");
     cout << "\t1.  cache:clear    Flush the application cache\n";
     cout << "\t2.  cache:table    Create a migration for the cache database table\n";
     cout << "--------------------------------------------\n";
     cout << ">> ";
     cin >> x;
     switch(x)
     {
         case 1:  clear(); system("php artisan cache:clear"); break;
         case 2:  clear(); system("php artisan cache:table"); break;
         case 0:  clear(); menu(); break;
         default: cout << "only [0-3] \n"; break;
     }

     again();
}

/*#5*/
void config()
{
    int x = 0;
    cout << getTitle("Config");
    cout << "\t1.  config:cache   Create a cache file for faster configuration loading\n";
    cout << "\t2.  config:clear   Remove the configuration cache file\n";
    cout << "--------------------------------------------\n";
    cout << ">> ";
    cin >> x;
    switch(x)
    {
     case 1:  clear(); system("php artisan config:cache"); break;
     case 2:  clear(); system("php artisan cache:clear"); break;
     case 0:  clear(); menu(); break;
     default: cout << "only [0-2] \n"; break;
    }

    again();
}

/*#6*/
void db()
{
    int x = 0;
    cout << getTitle("db");
    cout << "\t1. db:seed    Seed the database with records\n";
    cout << "--------------------------------------------\n";
    cout << ">> ";
    cin >> x;
    switch(x)
    {
     case 1:   clear(); system("php artisan db:seed"); break;
     case 0:  clear(); menu(); break;
     default: cout << "only [0-1] \n"; break;
    }

    again();
}

/*#7*/
void event()
{
 int x = 0;
    cout << getTitle("Event");
    cout << "\t1. event:generate   Generate the missing events and \n";
    cout << "                      listeners based on registration\n";
    cout << "--------------------------------------------\n";
    cout << ">> ";
    cin >> x;
    switch(x)
    {
     case 1: clear(); system("php artisan event:generate"); break;
     case 0:  clear(); menu(); break;
     default: cout << "only [0-1] \n"; break;
    }

    again();
}

/*#8*/
void key()
{
    int x = 0;
    cout << getTitle("Key");
    cout << "\t1. key:generate   Set the application key\n";
    cout << "--------------------------------------------\n";
    cout << ">> ";
    cin >> x;
    switch(x)
    {
     case 1:  clear(); system("php artisan key:generate"); break;
     case 0:  clear(); menu(); break;
     default: cout << "only [0-1] \n"; break;
    }

    again();
}

/*#9*/
void make()
{
    cout << getTitle("Make");
    cout << "working on it.\n";
//    cout << "\t1.  make:auth          Scaffold basic login and registration views and routes\n";
//    cout << "\t2.  make:channel       Create a new channel class\n";
//    cout << "\t3.  make:command       Create a new Artisan command\n";
//    cout << "\t4.  make:controller    Create a new controller class\n";
//    cout << "\t5.  make:event         Create a new event class\n";
//    cout << "\t6.  make:exception     Create a new custom exception class\n";
//    cout << "\t7.  make:factory       Create a new model factory\n";
//    cout << "\t8.  make:job           Create a new job class\n";
//    cout << "\t9.  make:listener      Create a new event listener clas\n";
//    cout << "\t10. make:mail          Create a new email class\n";
//    cout << "\t11. make:middleware    Create a new middleware class\n";
//    cout << "\t12. make:migration     Create a new migration file\n";
//    cout << "\t13. make:model         Create a new Eloquent model class\n";
//    cout << "\t14. make:notification  Create a new notification class\n";
//    cout << "\t15. make:observer      Create a new observer class\n";
//    cout << "\t16. make:policy        Create a new policy class\n";
//    cout << "\t17. make:provider      Create a new service provider class\n";
//    cout << "\t18. make:request       Create a new form request class\n";
//    cout << "\t19. make:resource      Create a new resource\n";
//    cout << "\t20. make:rule          Create a new validation rule\n";
//    cout << "\t21. make:seeder        Create a new seeder class\n";
//    cout << "\t22. make:test          Create a new test class\n";
//    cin >> x;
//    switch(x)
//    {
//     case 1:   system("clear"); system("php artisan make:auth ChangeAuthName"); break;
//     case 2:   system("clear"); system("php artisan make:channel ChangeChnnelName"); break;
//     case 3:   system("clear"); system("php artisan make:command ChangeCommandName"); break;
//     case 4:   system("clear"); system("php artisan make:controller ChangeControllerName -r -m ChangeModelName "); break;
//     case 5:   system("clear"); system("php artisan make:event"); break;
//     case 6:   system("clear"); system("php artisan make:exception Change ExceptionName"); break;
//     case 7:   system("clear"); system("php artisan make:factory ChangeFactoryName"); break;
//     case 8:   system("clear"); system("php artisan make:job ChangeJobName"); break;
//     case 9:   system("clear"); system("php artisan make:listener ChangeListenerName"); break;
//     case 10:  system("clear"); system("php artisan make:mail ChangeMailName"); break;
//     case 11:  system("clear"); system("php artisan make:middleware ChangeMiddlewareName"); break;
//     case 12:  system("clear"); system("php artisan make:migration ChangeMigrationName"); break;
//     case 13:  system("clear"); system("php artisan make:model ChangeModelName -c -m -f"); break;
//     case 14:  system("clear"); system("php artisan  make:notification ChangeNotificationName"); break;
//     case 15:  system("clear"); system("php artisan  make:observer ChangeObserverName"); break;
//     case 16:  system("clear"); system("php artisan  make:policy ChangePolicyName"); break;
//     case 17:  system("clear"); system("php artisan  make:provider ChangeProviderName"); break;
//     case 18:  system("clear"); system("php artisan  make:request ChangeRequestName"); break;
//     case 19:  system("clear"); system("php artisan  make:resource ChangeResourceName"); break;
//     case 20:  system("clear"); system("php artisan  make:rule ChangeRuleName"); break;
//     case 21:  system("clear"); system("php artisan  make:seeder ChangeSeederName"); break;
//     case 22:  system("clear"); system("php artisan  make:test ChangeTestName"); break;
//     case 0:  system("clear"); menu(); break;
//     default: cout << "only [0-22] \n"; break;
//    }
//
    again();
}

/*#10*/
void migrate()
{
    int x = 0;
    cout << getTitle("Migrate");
    cout << "\t1. migrate:fresh     Drop all tables and re-run all migrations\n";
    cout << "\t2. migrate:install   Create the migration repository\n";
    cout << "\t3. migrate:refresh   Reset and re-run all migrations\n";
    cout << "\t4. migrate:reset     Rollback all database migrations\n";
    cout << "\t5. migrate:rollback  Rollback the last database migration\n";
    cout << "\t6. migrate:status    Show the status of each migration\n";
    cout << "--------------------------------------------\n";
    cout << ">> ";
    cin >> x;
    switch(x)
    {
     case 1:  clear(); system("php artisan migrate:fresh"); break;
     case 2:  clear(); system("php artisan migrate:install"); break;
     case 3:  clear(); system("php artisan migrate:refresh"); break;
     case 4:  clear(); system("php artisan migrate:reset"); break;
     case 5:  clear(); system("php artisan migrate:rollback"); break;
     case 6:  clear(); system("php artisan migrate:status"); break;
     case 0:  clear(); menu(); break;
     default: cout << "only [0-6] \n"; break;
    }

    again();
}

/*#11*/
void notifications()
{
    int x = 0;
    cout << getTitle("Notification");
    cout << "\t1. notifications:table   Create a migration for the notifications table\n";
    cout << "--------------------------------------------\n";
    cout << ">> ";
    cin >> x;
    switch(x)
    {
     case 1:  clear(); system("php artisan notifications:table"); break;
     case 0:  clear(); menu(); break;
     default: cout << "only [0-1] \n"; break;
    }

    again();
}

/*#12*/
void optimize()
{
    int x = 0;
    cout << getTitle("Optimize");
    cout << "\t1. optimize:clear    Remove the cached bootstrap files\n";
    cout << "--------------------------------------------\n";
    cout << ">> ";
    cin >> x;
    switch(x)
    {
     case 1:  clear(); system("php artisan optimize:clear"); break;
     case 0:  clear(); menu(); break;
     default: cout << "only [0-1] \n"; break;
    }

    again();
}

/*#13*/
void package()
{
    int x = 0;
    cout << getTitle("Package");
    cout << "\t1. package:discover   Rebuild the cached package manifest\n";
    cout << "--------------------------------------------\n";
    cout << ">> ";
    cin >> x;
    switch(x)
    {
     case 1:  clear(); system("php artisan package:discover"); break;
     case 0:  clear(); menu(); break;
     default: cout << "only [0-1] \n"; break;
    }

    again();
}

/*#14*/
void queue()
{
    int x = 0;
    cout << getTitle("Queue");
    cout << "\t1. queue:failed        List all of the failed queue jobs\n";
    cout << "\t2. queue:failed-table  Create a migration for the failed queue jobs database\n";
    cout << "\t3. queue:flush         Flush all of the failed queue jobs\n";
    cout << "\t4. queue:forget        NOT READY YET - WORKING ON IT\n";
    cout << "\t5. queue:listen        Listen to a given queue\n";
    cout << "\t6. queue:restart       Restart queue worker daemons after their current\n";
    cout << "\t7. queue:retry         Retry a failed queue job\n";
    cout << "\t8. queue:table         Create a migration for the queue jobs database table\n";
    cout << "\t9. queue:work          Start processing jobs on the queue as a daemon\n";
    cout << "--------------------------------------------\n";
    cout << ">> ";

    cin >> x;
    switch(x)
    {
        case 1:  clear(); system("php artisan queue:failed"); break;
        case 2:  clear(); system("php artisan queue:failed-table"); break;
        case 3:  clear(); system("php artisan queue:flush "); break;
        case 5:  clear(); system("php artisan queue:listen "); break;
        case 6:  clear(); system("php artisan queue:restart"); break;
        case 7:  clear(); system("php artisan queue:retry"); break;
        case 8:  clear(); system("php artisan queue:table"); break;
        case 9: clear(); system("php artisan queue:work"); break;
        case 0:  clear(); menu(); break;
        default: cout << "only 0-9] \n"; break;
    }

    again();
}

/*#15*/
void route()
{
    int x = 0;
    cout << getTitle("Route");
    cout << "\t1. route:cache   Create a route cache file for faster route\n";
    cout << "\t2. route:clear   Remove the route cache file\n";
    cout << "\t3. route:list    List all registered routes\n";
    cout << "--------------------------------------------\n";
    cout << ">> ";
    cin >> x;
    switch(x)
    {
        case 1:  clear(); system("php artisan route:cache"); break;
        case 2:  clear(); system("php artisan route:clear"); break;
        case 3:  clear();system("php artisan route:list"); break;
        case 0:  clear(); menu(); break;
     default: cout << "only [0-3] \n"; break;
    }

    again();
}

/*#16*/
void schedule()
{
    int x = 0;
    cout << getTitle("Schedule");
    cout << "\t1. schedule:run   Run the scheduled commands\n";
    cout << "--------------------------------------------\n";
    cout << ">> ";
    cin >> x;
    switch(x)
    {
     case 1:  clear(); system("php artisan schedule:run"); break;
     case 0:  clear(); menu(); break;
     default: cout << "only [0-1] \n"; break;
    }

    again();
}

/*#17*/
void session()
{
    int x = 0;
    cout << getTitle("Session");
    cout << "\t1. session:table   Create a migration for the session database table\n";
    cout << "--------------------------------------------\n >> ";
    cout << ">> ";
    cin >> x;
    switch(x)
    {
     case 1:  clear(); system("php artisan session:table"); break;
     case 0:  clear(); menu(); break;
     default: cout << "only [0-1] \n"; break;
    }

    again();
}

/*#18*/
void storage()
{
    int x = 0;
    cout << getTitle("Storage");
    cout << "\t1. storage:link   Create a symbolic link from 'public/storage' to 'storage/app/public'\n";
    cout << "--------------------------------------------\n >> ";
    cin >> x;
    switch(x)
    {
     case 1:  clear(); system("php artisan storage:link"); break;
     case 0:  clear(); menu(); break;
     default: cout << "only [0-1] \n"; break;
    }

    again();
}

/*#19*/
void telescope()
{
    int x = 0;
    cout << getTitle("Telescope");
    cout << "\t01. telescope:clear    Clear all entries from Telescope\n";
    cout << "\t02. telescope:install  Install all of the Telescope resources\n";
    cout << "\t03. telescope:prune    Prune stale entries from the Telescope database\n";
    cout << "\t04. telescope:publish  Prune stale entries from the Telescope database\n";
    cout << "--------------------------------------------\n >> ";
    cin >> x;
    switch(x)
    {
     case 1:  clear(); system("php artisan telescope:clear"); break;
     case 2:  clear(); system("php artisan telescope:install"); break;
     case 3:  clear(); system("php artisan telescope:prune"); break;
     case 4:  clear(); system("php artisan telescope:publish"); break;
     case 0:  clear(); menu(); break;
     default: cout << "only [0-4] \n"; break;
    }

    again();
}

/*#20*/
void vendor()
{
    int x = 0;
    cout << getTitle("Vendor");
    cout << "\t1. vendor:publish   Publish any publishable assets from vendor\n";
    cout << "--------------------------------------------\n >> ";
    cin >> x;
    switch(x)
    {
     case 1:  clear(); system("php artisan vendor:publish"); break;
     case 0:  clear(); menu(); break;
     default: cout << "only [0-1] \n"; break;
    }

    again();
}

/*#21*/
void view()
{
    int x = 0;
    cout << getTitle("View");
    cout << "\t1. view:cache  Compile all of the application's Blade templates\n";
    cout << "\t2. view:clear  Clear all compiled view files\n";
    cout << "--------------------------------------------\n >> ";
    cin >> x;
    switch(x)
    {
     case 1:  clear(); system("php artisan view:cache"); break;
     case 2:  clear(); system("php artisan view:clear"); break;
     case 0:  clear(); menu(); break;
     default: cout << "only [0-2] \n"; break;
    }

    again();
}

/*#22*/
void composer()
{
    int x = 0;
    cout << getTitle("Composer version 1.8.5");
    cout << "\t1. -V, --version        Display this application version\n";
    cout << "\t2. clear-cache          Clears composer's internal package cache.\n";
    cout << "\t3. dump-autoload        Dumps the autoloader.\n";
    cout << "\t4. list                 Lists commands.\n";
    cout << "\t5. self-update          Updates composer.phar to the latest version.\n";
    cout << "\t6. status               Shows a list of locally modified packages,\n";
    cout << "\t                        for packages installed from source.\n";
    cout << "\t7. update               Upgrades your dependencies to the latest version according to \n";
    cout << "\t                        composer.json, and updates the composer.lock file.\n";
    cout << "\t8. install              Installs the project dependencies from the composer.lock file\n";
    cout << "\t                        if present, or falls back on the composer.json.\n";
    cout << "--------------------------------------------\n >> ";

    cin >> x;
    switch(x)
    {
        case 1:  clear(); system("composer --version"); break;
        case 2:  clear(); system("composer status"); break;
        case 3:  clear(); system("composer dump-autoload"); break;
        case 4:  clear(); system("composer list"); break;
        case 5:  clear();  system("composer self-update"); break;
        case 6:  clear(); system("composer status"); break;
        case 7:  clear(); system("composer update --ignore-platform-reqs"); break;
        case 8:  clear(); system("composer install --ignore-platform-reqs"); break;
        case 0:  clear(); menu(); break;
        default: cout << "only [0-8] \n"; break;
    }

    again();
}

/*#23*/
void app()
{
    int x = 0;
    cout << getTitle("App");
    string re = "php artisan app:name Laravel";
     //the name will be given as parameter later on.
    cout << "\t1. app:name   Set the application namespace\n";
    cout << "--------------------------------------------\n";
    cout << ">> ";
    cin >> x;

    switch(x)
    {
       case 1:  clear(); system(re.c_str()); break;
       case 0:  clear(); menu(); break;
       default: cout << "only [0-1] \n"; break;
    }

    again();

}

/*#24*/
void others()
{
    int x = 0;
    cout << getTitle("Others");
    cout << "\t1. make a fresh Laravel project- default name is Laravel\n";
    cout << "--------------------------------------------\n >> ";
    cin >> x;
    switch(x)
    {
        // The Name of Application will be given as a Parameter later on.
        case 1: clear(); system("composer create-project --prefer-dist laravel/laravel laravel"); break;
        case 0:  clear(); menu(); break;
        default: cout << "only [0-1] \n"; break;
    }

    again();
}